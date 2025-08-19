// Multi level Inheritance
// class Grandparent{};
// class Parent: public Grandparent {}; 
// class Child: public Parent{};


// Hybrid Inheritance(mixture of multiple and heirachy)
// class A{};
// class B: public A{};
// class C: public B{};
// class D: public C{}; 
//example
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void show(){cout<<"Class A\n";};
// };
// class B : public A{};
// class C : public B{};
// class D : public C{};


// Multiple Inheritance
// class Father{};
// class Mother{};
// class Child: public Father, public Mother{}; // Ambiguity error as 2 parents cant have same child or diamond problem

// Conclusion: Multliple inheritance doesnt work on its own or in hybrid due to ambiguity error or diamond problem