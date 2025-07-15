# 🍔 Burger.dev - Sistema de Pedidos em C

Bem-vindo ao **Burger.dev**, um sistema simples de pedidos de lanches feito em C para rodar no Windows! Feito especialmente para quem está aprendendo C ou quer um exemplo divertido de interação com o usuário em modo console.
Esse foi o projeto final desenvolvido em C, foi meu primeio projeto. Feito em meados de abril/maio de 2024.

> Peço desculpas pela qualidade, foi meu primeiro projeto...

---

## 📷 Demonstração

```
======================================= Bem-Vindo ao sistema da Burger.dev! =======================================
Digite seu nome: Gabriel
Digite a data de hoje: 15/07/2025

Digite a sua escolha: 
 1 - Gerar seu pedido
 2 - Mostrar os pedidos
 3 - Pedir comida em casa
 4 - Sair

Sua escolha: 
```

---

## 📝 Funcionalidades

- **Menu interativo** com várias opções para o usuário.
- **Animação de boas-vindas** e carregamento usando `Sleep` e `system("cls")`.
- **Pedidos de lanches** com cálculo de subtotal.
- **Entrega em casa** com cálculo de frete.
- **Consulta de pedidos** pelo nome do cliente.
- **Mensagem de despedida** estilizada.
- **Easter egg:** tente digitar `666` no menu 😉.

---

## 🚀 Como usar

1. **Compile o código**:

   ```bash
   gcc burgerdev.c -o burgerdev.exe
   ```

2. **Execute no Windows**:

   ```bash
   burgerdev.exe
   ```

3. **Siga as instruções** no terminal. O menu é autoexplicativo!

---

## 🍟 Cardápio

| Código | Item                                          | Preço      |
|--------|-----------------------------------------------|------------|
|   1    | Hambúrguer                                    | R$ 10,99   |
|   2    | Batata-frita                                  | R$ 8,99    |
|   3    | Combo (hambúrguer + batata + bebida)          | R$ 19,99   |

- **Frete:** R$ 5,99 para pedidos entregues em casa.

---

## ⚙️ Requisitos

- **Windows** (usa `<windows.h>` e `system("cls")`)
- **Compilador C** (GCC ou similar)

---

## 🛠️ Personalização

- Edite os itens do cardápio diretamente no código.
- Adicione mais opções de lanches, bebidas ou funcionalidades!

---

## ❤️ Feito com amor

- Email para contato: burgerdev@support.com
- Feito com `<3` por quem ama código e comida!

---

## ⚠️ Observações

- **Atenção:** O código utiliza `system("cls")` e `Sleep()` do Windows.
- Não recomendado para produção, apenas para fins didáticos.

---

## 🦜 Easter Egg

Digite `666` no menu e veja o que acontece! (Internet necessária)

---

## 📄 Licença

Este projeto é livre para estudos e adaptações. Divirta-se programando!
