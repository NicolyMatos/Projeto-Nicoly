# Gerenciador de Despesas

### Projeto feito através do Qt Creator, na disciplina de Programação Estruturada 2019.1.
### O Gerenciador de Gastos é um sistema que permite o controle de despesas, através de dados fornecidos pelo usuário.

O programa permite que o usuário cadastre as despesas do mês inserindo a sua descrição (nome ou dado do gasto), o seu valor, e o dia.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Cadastro.png)

A partir dessses dados o programa gera três estatísticas.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Estat%C3%ADsticas.png)

# Manual do usuário

## Como cadastrar?

Para cadastrar é bem simples, o usuário deve digitar a 'Descrição', o 'Valor' e o 'Dia'. Logo após, deve-se clicar em 'Cadastrar'. 

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/CAdastrado.png)

Feito isso os dados fornecidos pelo usuário serão mostrados na tabela, como mostrado abaixo.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/CAdastradoNaTabela.png)
OBSERVAÇÕES:
1) O programa não irá cadastrar se:

  -O usuário digitar um texto no 'Dia' e/ou no 'Valor', ele só aceita valores nessas abas;
  
  -O usuário tentar colocar um dia que não seja entre 1-31;
  
  -O usuário digitar uma descrição com menos de 3 caracteres;
  
2) Para o programa dar os dados estatísticos corretos o usuário deve cadastrar o 'Valor' utilizando um '.' ao invez de uma ','- quando este não for um valor inteiro, como por exemplo '29,60', o usuário deverá cadastrar como '29.60'.
  
## Como ordenar?

Para se ordenar basta clicar na opção desejada :


#### Por Descrição:
O programa irá ordenar a 'Descrição' em ordem alfabética. 

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/OrdenarDEscri%C3%A7%C3%A3o.png)

#### Por Dia:
O Programa irá ordenar de acordo com os dias cadastrados, em ordem crescente.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/OrdenarDia.png)

#### Por Valor:
O programa irá ordenar os valores que estão contidos na tabela, em ordem decrescente.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/OrdenarValor.png)

## Como acessar as estatísticas? 

Na parte superior do programa existem duas abas (Despesas e Estatísticas). Para visualizar as estatísticas basta clicar na aba 'Estatísticas'.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/DadosGerados.png)

Nesta aba o usuário encontrará 3 dados, o primeiro será o valor do menor gasto feito no mês, o segundo será o valor do maior gasto feito no mês e o terceiro será o valor total de gastos no mês.

## Como Salvar os dados em um arquivo? E como carregar em um arquivo?

#### Salvar:
Para salvar é preciso clicar em 'Arquivo', na parte superior esquerda do programa. Ao apertar irá aparecer duas opções, clique na opção 'salvar'.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Arquivo.png)

Ao fazer isso o programa irá abrir uma pasta e você irá salvar o seu arquivo.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Salvar.png)

Na barra do 'Nome' você irá escrever o nome com o qual o arquivo deve ser salvo. Depois basta clicar em 'Salvar' para finalizar o salvamento.

#### Carregar:
Para carregar é preciso clicar em 'Arquivo', na parte superior esquerda do programa. Ao apertar, irá aparecer duas opções, clique na opção 'carregar'. 

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Carregar.png)

O programa irá abrir uma pasta e na parte inferior dela terá um campo de busca 'Nome', lá você digitará o nome que você utilizou para salvar. Depois basta clicar em abrir e os dados salvos irão aparecer na tabela do programa.

![Alt ou título da imagem](https://github.com/NicolyMatos/Projeto-Nicoly/blob/master/Imagens/Carregar2.png)

## FIM DO MANUAL!


