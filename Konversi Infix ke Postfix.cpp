#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Fungsi untuk menentukan prioritas operator
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Fungsi untuk mengkonversi infix menjadi postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++) {
        if (isalnum(infix[i])) { // Jika operand, langsung dimasukkan ke postfix
            postfix += infix[i];
        }
        else if (infix[i] == '(') { // Jika tanda kurung buka, dimasukkan ke STACK
            s.push(infix[i]);
        }
        else if (infix[i] == ')') { // Jika tanda kurung tutup, operator dikeluarkan dari STACK dan dimasukkan ke postfix hingga ditemukan tanda kurung buka
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Mengeluarkan tanda kurung buka dari STACK
        }
        else { // Jika operator, dikeluarkan operator dari STACK dan dimasukkan ke postfix hingga ditemukan operator yang memiliki prioritas yang lebih rendah atau sama
            while (!s.empty() && precedence(s.top()) >= precedence(infix[i])) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]); // Mengeluarkan operator dari infix dan dimasukkan ke STACK
        }
    }
    while (!s.empty()) { // Jika infix telah selesai, dikeluarkan semua operator dari STACK dan dimasukkan ke postfix
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix, postfix;
    cout << "Masukkan infix: ";
    getline(cin, infix);
    postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}
