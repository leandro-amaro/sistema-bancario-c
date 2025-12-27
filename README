# 🏦 Sistema Bancário em C (CLI)

Projeto desenvolvido durante o 1º semestre de Análise e Desenvolvimento de Sistemas (ADS). O foco deste repositório foi a refatoração de um sistema de menus para torná-lo à prova de falhas (Crash Proof).

## 📋 Sobre o Projeto
Este é um gerenciador financeiro simples via console. O objetivo principal foi implementar **tratamento de erros de entrada** para impedir que o programa entre em loop infinito ou quebre caso o usuário digite letras em campos numéricos.

## 🚀 Funcionalidades Refatoradas
- **Menu Interativo:** Navegação via `switch-case` dentro de um loop `do-while`.
- **Input Safety (Segurança de Entrada):**
  - Implementação de validação do retorno do `scanf`.
  - Limpeza de buffer com `while(getchar() != '\n')` para sanitizar a entrada padrão.
- **Regras de Negócio:**
  - [x] Bloqueio de saque se o saldo for insuficiente.
  - [x] Bloqueio de valores negativos para depósito ou saque.

## 🛠️ Tecnologias
- Linguagem C (Padrão C99)
- Biblioteca Padrão (`stdio.h`, `stdbool.h`)
