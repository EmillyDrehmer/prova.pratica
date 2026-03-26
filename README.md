# prova.pratica
Avaliação prática da UC Sistemas Embarcados e Microcontrolado.

💧 HydroSafe — Sistema de Controle de Nível de Água com Arduino
**Descrição**

O HydroSafe é um sistema automatizado desenvolvido com Arduino para monitorar e controlar o nível de água em uma caixa. Ele utiliza sensores de nível, controle de bomba via servo motor e simulação de consumo por potenciômetro, garantindo eficiência e segurança no abastecimento.

** Objetivo**

Automatizar o controle de enchimento de uma caixa d’água, evitando desperdícios, falta de água e falhas no sistema, além de permitir o monitoramento do consumo em tempo real.

**Funcionalidades**
Leitura de 5 níveis de água
Controle automático da bomba (servo motor)
Simulação de consumo com potenciômetro
Limite de consumo por nível
Detecção de erro nos sensores
Armazenamento de dados na EEPROM
Exibição em display LCD I2C
Indicação por LEDs (status do sistema)

** Lógica do Sistema**

O sistema lê os sensores para identificar o nível atual da água. Com base nisso:

Liga a bomba quando necessário
Desliga ao atingir limites ou detectar erros
Calcula o consumo com base na vazão simulada
Atualiza e salva os dados periodicamente

 **Componentes Utilizados**

Arduino Uno (ou compatível)
Display LCD I2C (16x2)
5 sensores de nível
Potenciômetro
Servo motor
LEDs (vermelho e verde)
Resistores e jumpers

**Estados do Sistema**
Nível Crítico → Caixa vazia
Enchendo → Bomba ativa
Erro Sensor → Falha na leitura
Limite Atingido → Consumo máximo do nível
Cheio → Caixa totalmente abastecida

**Armazenamento**
O consumo é salvo na EEPROM a cada 5 segundos, evitando perda de dados ao desligar o sistema.

 **Exibição no LCD**
 
Linha 1: Status + porcentagem
Linha 2: Consumo (em litros)

 **Possíveis Melhorias**
 
Integração com IoT
Monitoramento remoto via app
Sensores mais precisos
Automação com válvulas reais
