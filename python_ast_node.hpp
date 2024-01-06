/*
* @name python_ast_node.h
* @description Hierachy of AST
* @author Ismaeel_J_K 
* @example x=y+99
*                        |---------|
*                        | AstNode |
*                        |---------|
*                             |
*                             |
*                      |--------------|
*                      |    Assign    |
*                      |--------------|
*                          |        |
*                         |           |
*                        |              |
*                    |------------|   |--------------|
*                    |     x      |   |      Plus    |
*                    |------------|   |--------------|
*                                       |          |
*                                      |            |
*                                     |              |
*                           |-------------|     |-------------|
*                           |       y     |     |       99    |
*                           |-------------|     |-------------|
*                                       
*/

#ifndef AST_NODE_H
#define AST_NODE_H

#include <iostream>
#include <vector>
// #include <stdlib.h>


// Abstract base class for AST nodes
class AstNode {
public:
    std::string name = "undefined";   // String member variable with default value
    std::string label = "undefined";
    virtual void add(AstNode* node) = 0;
    virtual void print() const = 0;
    virtual ~AstNode() {}
    
};

// Composite node for representing function declare
class FunctionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    FunctionNode(const std::string& name) {
        this->name = name;
        this->label = "Declare Fun";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~FunctionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

// Composite node for representing class declare
class ClassNode : public AstNode {
private:
    std::vector<AstNode*> next;
public:
    ClassNode(const std::string& name) {
        this->name = name;
        this->label = "Declare Class";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ClassNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

// base node for representing identifier ,will create object  from lexer
class IdentifierNode : public AstNode {

public:
    std::string value = "undefined";
    IdentifierNode(std::string name, std::string label, std::string value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }
    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};

class Arg : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    Arg(const std::string& name) {
        this->name = name;
        this->label = "Argument";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& arg : next) {
            arg->print();
        }
    }
};

class Args : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    Args(const std::string& name) {
        this->name = name;
        this->label = "Arguments";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class BlockNode : public AstNode {
private:
    std::vector<AstNode*> next;
public:
    BlockNode(const std::string& name) {
        this->name = name;
        this->label = "Block";
    }
    void add(AstNode* node) override {
        next.push_back(node);
    }
    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        // std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }
    ~BlockNode() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};

class StatementsNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    StatementsNode(const std::string& name) {
        this->name = name;
        this->label = "Block Statements";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~StatementsNode() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};

class assignmentStatement : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    assignmentStatement(const std::string& name) {
        this->name = name;
        this->label = "assignment";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
        // for (const auto& stmt : next) {
        //     stmt->print();
        // }
    }

    ~assignmentStatement() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};

class BreakStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;

public:
    BreakStatementNode() {
        this->name = "BreakStatement";
        this->label = "break";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << "\"]" << std::endl;
    }
    ~BreakStatementNode() {
    for (const auto& stmt : next) {
            delete stmt;
        }
    }
};

class ContinueStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    ContinueStatementNode() {
        this->name = "ContrinueStatement";
        this->label = "Continue";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << "\"]" << std::endl;
    }
    ~ContinueStatementNode() {
    for (const auto& stmt : next) {
            delete stmt;
        }
    }
};

class WhileStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    WhileStatementNode() {
        this->name = "WhileStatement";
        this->label = "While";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~WhileStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class ForStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    ForStatementNode() {
        this->name = "ForStatement";
        this->label = "for";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~ForStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class IfStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    IfStatementNode() {
        this->name = "IfStatement";
        this->label = "If";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~IfStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class ElIfStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    ElIfStatementNode() {
        this->name = "ElIfStatement";
        this->label = "ElIf";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~ElIfStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class ElseStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    ElseStatementNode() {
        this->name = "ElIfStatement";
        this->label = "ElIf";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~ElseStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class StringNode : public AstNode {
private:
    std::string value;
public:
    StringNode(std::string name, std::string label, std::string value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};

// Leaf node for representing numeric literals
class NumberNode : public AstNode {
private:
    int value;
public:
    NumberNode(std::string name, std::string label, int value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};

class FunctionCallNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    FunctionCallNode(const std::string& name) {
        this->name = name;
        this->label = "Funiction Call";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~FunctionCallNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class TryStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    TryStatementNode() {
        this->name = "TryStatement";
        this->label = "try";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~TryStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class withStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    withStatementNode() {
        this->name = "WithStatement";
        this->label = "with";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~withStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class matchStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    matchStatementNode() {
        this->name = "MatchStatement";
        this->label = "Match";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~matchStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class CaseStatementNode : public AstNode {
    private:
    std::vector<AstNode*> next;
public:
    CaseStatementNode() {
        this->name = "CaseStatement";
        this->label = "case";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\""<<label<<"\"]" << std::endl;
    }
    ~CaseStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};


// Composite node for representing binary expressions
class BinaryExpressionNode : public AstNode {
private:
    char operation;
    AstNode* left;
    AstNode* right;

public:
    BinaryExpressionNode(char op, AstNode* l, AstNode* r)
        : operation(op), left(l), right(r) {}

    void add(AstNode* node) override {
        if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Binary expression already has two children." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << "BinaryExpressionNode" << " [label=\"" << operation << "\"]" << std::endl;
        left->print();
        std::cout << "\t" << "BinaryExpressionNode" << " [label=\"" << operation << "\"]" << std::endl;
        right->print();
    }

    ~BinaryExpressionNode() {
        delete left;
        delete right;
    }
};

class yieldStatementNode : public AstNode {
private:
    AstNode* yieldValue;

public:
    yieldStatementNode(AstNode* value)
        : yieldValue(value) {
        this->name = "yieldStatement";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << "yieldStatement" << "\"]" << std::endl;
        yieldValue->print();
    }

    ~yieldStatementNode() {
        delete yieldValue;
    }
};

class globalStatementNode : public AstNode {
private:
    AstNode* globalValue;

public:
    globalStatementNode(AstNode* value)
        : globalValue(value) {
        this->name = "GlobalStatement";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << "GlobalStatement" << "\"]" << std::endl;
        globalValue->print();
    }

    ~globalStatementNode() {
        delete globalValue;
    }
};

class nonLocalStatementNode : public AstNode {
private:
    AstNode* nonLocalValue;

public:
    nonLocalStatementNode(AstNode* value)
        : nonLocalValue(value) {
        this->name = "nonLocalStatement";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << "nonLocalStatement" << "\"]" << std::endl;
        nonLocalValue->print();
    }

    ~nonLocalStatementNode() {
        delete nonLocalValue;
    }
};

class ReturnStatementNode : public AstNode {
private:
    AstNode* returnValue;

public:
    ReturnStatementNode(AstNode* value)
        : returnValue(value) {
        this->name = "ReturnStatement";
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << "ReturnStatement" << "\"]" << std::endl;
        returnValue->print();
    }

    ~ReturnStatementNode() {
        delete returnValue;
    }
};


class AST {
private:
    AstNode* root = nullptr;
public:
    AST(AstNode* r) : root(r) {}

    ~AST() {
        if (root != nullptr) {
            delete root;
            root = nullptr;
        }
    }
    void Print() {
        std::cout << "digraph G {" << std::endl;
        root->print();
        std::cout << "}" << std::endl;
    }
};
#endif 
