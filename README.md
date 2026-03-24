# prova.pratica
Avaliação prática da UC Sistemas Embarcados e Microcontrolado.

**💧 HydroSafe — Sistema Inteligente de Controle de Nível de Água
Descrição**

O HydroSafe é um sistema embarcado desenvolvido com Arduino para monitoramento e controle automático do nível de água em reservatórios.

O projeto utiliza sensores de nível, sensor de vazão, display LCD, servo motor (bomba) e EEPROM para armazenar dados de consumo, garantindo um funcionamento eficiente, seguro e automatizado.

**Objetivo**

Automatizar o processo de enchimento de um tanque, evitando desperdícios, prevenindo falhas nos sensores e controlando o consumo de água de forma inteligente.

**Funcionalidades**
 Monitoramento de até 5 níveis de água
 Indicação visual com LEDs (crítico e cheio)
 Controle automático da bomba via servo motor
 Detecção de erros nos sensores
 Cálculo do consumo de água (litros)
 Armazenamento de dados na EEPROM
 Exibição em tempo real no LCD 16x2
 Limite máximo de consumo por nível
 Lógica do Sistema

O sistema funciona com base em três pilares:

🔹 Nível da água

Sensores digitais identificam quantos níveis estão ativos no tanque.

🔹 Consumo

Calculado a partir do sensor de vazão ao longo do tempo.

🔹 Segurança
Detecta inconsistências entre sensores
Interrompe a bomba em caso de erro
Respeita limites de consumo definidos

** Componentes Utilizados**
Arduino Uno (ou compatível)
Display LCD 16x2
5 sensores de nível (digitais)
Sensor de vazão (analógico)
Servo motor (controle da bomba)
LEDs (vermelho e verde)
Resistores e jumpers


** Pinagem**
Componente	Pino Arduino
LCD	8, 9, 10, 11, 12, 13
Sensores nível	2, 3, 4, 5, 6
Servo (bomba)	7
Sensor de vazão	A0
LED vermelho	A1
LED verde	A2

** Estados do Sistema**
Situação	Descrição
Nível Crítico	Todos sensores desligados
Enchendo	Funcionamento normal
Limite Atingido	Consumo máximo atingido
Cheio	Tanque completamente cheio
Erro Sensor	Falha na leitura dos sensores

** Como Funciona**
Lê os sensores de nível
Verifica possíveis erros
Calcula o consumo com base na vazão
Controla a bomba automaticamente
Atualiza o LCD e LEDs
Salva dados na EEPROM

** Como Usar**
Monte o circuito conforme a pinagem
Envie o código para o Arduino
Ligue o sistema
Acompanhe as informações no display
