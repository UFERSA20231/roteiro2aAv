# Roteiro da $2^a$ unidade
## Tabela HASH

### Introdução

Desenvolva um sistema de lista de contatos armazenados em uma lista de dispersão. Os dados íniciais devem ser extraídos da lista inicial [contatos](todosOscontatos.txt) e devem armazenados eficientemente em uma tabela hash com uma capacidade total (sem colisão) de $25\%$ a $75\%$ de todos os contatos.

### Principais operações

As funcionalidades do sistema serão distribuídos nas operações de:

+ Busca
+ Inserção
+ Remoção

Codificados de maneira que todas as características da HASH sejam preservadas.

### Opções de implementação

#### Interface gráfica

Excepcionalmente neste roteiro, ã interface gráfica pode ser flexibilizada. Pode ser implementada em qualquer linguagem ou mesmo apresentando os resultados no terminal em linguagem C/C++.

#### Configuração das tabelas HASH

Cada grupo utilizará uma configuração específica para *Função de mapeamento* e *tratamento de colisão*. Abaixo as opções a serem combinadas:

a) Função de mapeamento:
+ Método da divisão
+ Método da dobra
+ Método do multiplicação

b) Tratamento de colisão:
+ (Endereçamento Aberto):
    + Sondagem linear
    + Sondagem quadrática
    + Duplo hash
+ Endereçamento Encadeado:
    + Encadeamento exterior
    + Encadeamento interior


#### Escolha das funcionalidades:

+ A forma de escolha da função de mapeamento e tratamento de colisão serão realizadas por SORTEIO.

+ Os alunos que não estiverem presentes, serão escolhidos também por sorteio posteriormente.


### Datas importantes:

03/04/2024 - Data de entrega do trabalho

### Grupos

Os grupos serão formados por até 4 integrantes.

### Forma de entrega do trabalho

+ Repositório do GIT de forma que seja observado a atuação dos integrantes no trabalho;
+ Comentários sobre o que foi desenvolvido nas linhas de código do projeto.
+ README que descreva as observações que foram realizadas na implementação do projeto, como por exemplo:
    + Como foi realizado a interface gráfica;
    + Quais os problemas ocorridos e quais foram as soluções;
    + Justificativas de escolhas realizadas no projeto.
    + ...

### Observações finais

+ Todas as implementações podem, e devem ser, adaptadas para a realidade dos dados. Por isso, a documentação será importante para indentificar o que foi realizado e como foi planejado a solução.


