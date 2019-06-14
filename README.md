# Gerenciador de Despesas

### Projeto feito através do Qt Creator, na disciplina de Programação Estruturada 2019.1.
### O Gerenciador de Gastos é um sistema que permite o controle de despesas, através de dados fornecidos pelo usuário.

O programa permite que o usuário cadastre as despesas do mês inserindo a sua descrição (nome ou dado do gasto), o seu valor, e o dia.




# Manual do usuário

## Como cadastrar?

Para cadastrar é bem simples, o usuário deve escrever a 'Descrição', o 'Valor' e o 'Dia'. Logo após, deve-se clicar em 'Cadastrar'. 
Vamos utilizar como exemplo os dados da imagem mostrada a seguir.



Feito isso os dados fornecidos pelo usuário serão mostrados na tabela, como mostrado abaixo.


OBSERVAÇÕES:
1) O programa não irá cadastrar se:
  -O usuário digitar um texto no 'Dia' e/ou no 'Valor', ele só aceita valores;
  -O usuário tentar colocar um dia que não seja entre 1-31;
  -O usuário digitar uma descrição com menos de 3 caracteres;
2) Para o programa dar os dados estatísticos corretos o usuário deve cadastrar o 'Valor' utilizando um '.' ao invez de uma ','- quando este não for um valor inteiro, como por exemplo '29,60', o usuário deverá cadastrar como '29.60'.
  
## Como ordenar?

Para se ordenar basta clicar na opção desejada :

#### Por Descrição:
O programa irá ordenar a descrição em ordem alfabética. 

#### Por Dia:
O Programa irá ordenar de acordo com os dias cadastrados, em ordem crescente.

#### Por Valor:
O programa irá ordenar os valores que estão contidos na tabela, em ordem decrescente.

## Como acessar as estatísticas? 

Na parte superior do programa existem duas abas (Despesas e Estatísticas). Para visualizar as estatísticas basta clicar na aba 'Estatistíca'.

Nesta aba o usuário encontrará 3 dados, o primeiro será o valor da maior compra feita no mês, o segundo será o valor da menor compra feita no mês e o terceiro será o valor total de gastos no mês.

## Como Salvar os dados em um arquivo? E como carregar em um arquivo?

#### Salvar:
Para salvar é preciso clicar em 'Arquivo', na parte superior esquerda do programa. Ao apertar irá aparecer duas opções, clique na opção 'salvar'.

Ao fazer isso o programa irá abrir uma pasta você irá salvar, onde você desejar, o seu arquivo 

#### Carregar:
Para carregar é preciso clicar em 'Arquivo', na parte superior esquerda do programa. Ao apertar irá aparecer duas opções, clique na opção 'carregar'. 

O programa irá abrir uma pasta e na parte inferior dela terá um camo de busca, lá você digitara o nome que você utilizou para salvar. Depois basta clicar em abrir e os dados salvas irão aparecer na tabela do programa.



