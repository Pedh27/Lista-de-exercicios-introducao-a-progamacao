using System;

string nome = "Pedro";
string cargo = "Desenvolvedor";
int idade = 20;
double salario = 3500.00;

console.WriteLine("APRESENTAÇÃO DE FUNCIONÁRIO");
console.WriteLine($"Nome: {nome}");
console.WriteLine($"Cargo:{cargo}");
console.WriteLine($"Idade: {idade}");
console.WriteLine($"Salário: R$ {salario: F2}");