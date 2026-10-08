# 🚑 Giroflex de Ambulância

Projeto desenvolvido no Tinkercad utilizando Arduino, LEDs e buzzer para simular um giroflex de ambulância.

## 🔧 Componentes

- Arduino Uno
- LED vermelho
- LED azul
- 2 resistores de 220 Ω
- Buzzer
- Jumpers

## 🔌 Ligações

| Componente | Pino Arduino |
|---|---|
| LED vermelho | 8 |
| LED azul | 9 |
| Buzzer | 10 |
| GND | GND |

## ⚙️ Funcionamento

O projeto alterna entre os LEDs vermelho e azul enquanto o buzzer emite sons diferentes.

O funcionamento é:

🔴 LED vermelho + buzzer  
⬇️  
🔵 LED azul + buzzer  
⬇️  
🔴 LED vermelho + buzzer  
⬇️  
🔵 LED azul + buzzer

O processo continua em loop, simulando o sistema de sinalização sonora e luminosa de uma ambulância.

## 💻 Código

O código foi desenvolvido em C/C++ para Arduino e pode ser executado no Tinkercad.

## 🖼️ Demonstração

![Giroflex de Ambulância](giroflex.gif)

## 🛠️ Ferramenta utilizada

- [Tinkercad](https://www.tinkercad.com/)
- Arduino Uno
