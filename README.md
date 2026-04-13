# FECAP - Fundação de Comércio Álvares Penteado

<p align="center">
<a href= "https://www.fecap.br/"><img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRhZPrRa89Kma0ZZogxm0pi-tCn_TLKeHGVxywp-LXAFGR3B1DPouAJYHgKZGV0XTEf4AE&usqp=CAU" alt="FECAP - Fundação de Comércio Álvares Penteado" border="0"></a>
</p>

# AquaCicle

## Alvacoders

## Integrantes: <a href="https://www.linkedin.com/in/matheus-moura-77b7a213a/">Matheus Moura</a>, <a href="https://www.linkedin.com/in/murilo-dias-da-silva-9265292a1?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app">Murilo Dias</a>, 

## Professores Orientadores: <a href="https://www.linkedin.com/in/victorbarq/"> Victor Bruno </a>, <a href="https://www.linkedin.com/in/victorbarq/">Adriano Felix Valente</a>, <a href="https://www.linkedin.com/in/victorbarq/"> Jose Carlos </a> 


## Descrição

<p align="center">
<img src="docs/capa.jpg" alt="NOME DO JOGO" border="0">
  Projeto by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://github.com/2023-2-NADS1/Grupo6/tree/main">Matheus Moura da Silva e Murilo Dias da Silva</a> is licensed under <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"></a></p>
</p>


O objetivo do nosso grupo é desenvolver um projeto que tenha um impacto direto nas <a href="https://brasil.un.org/pt-br/sdgs">Objetivos de desenvolvimento Sustentável da Organização das Nações Unidas(ONU)<a/>, com a ajuda da Internet das coisas.
Com isso desenvolvemos um projeto em que visa realizar o tratamento da água de reuso das chuvas para uso da população.
<br><br>
Já que nosso projeto deveria fazer sentido com os Objetivos de Desenvolvimento Sustentavél da ONU, a primeira coisa após termos decidido qual seria o o projeto, fomos então indentificar em qual Objetivos de desenvolvimento Sustentável o nosso projeto se enquadrava sendo dois objetivos, conforme abaixo:
<br><br>
Atender ao objetivo 6.3 da ODS 6- Agua potável e saneamento: Reduzindo à metade a proporção de águas residuais não tratadas e aumentando substancialmente a reciclagem e reutilização segura globalmente (ONU)
<br><br>
Atender ao objetivo 12.2 da ODS 12- consumo e produção resposável)  Até 2030, alcançar a gestão sustentável e o uso eficiente dos recursos naturais (ONU).
<br><br>
Com todos os nossos objetivos definidos, podemos partir para a montagem do nosso projeto, onde vamos captar a água da chuva e realizar o tratamento dessa água e disponibilizar para a população para a lavagem de carros ou qualquer outro serviços que o individuo precisar utilizar, ou seja o nosso projjeto conssite em três fases, conforme abaixo:
<br><br>
1° Captação da água para um reservatório.
<br><br>
2° Estação de tratamento da água.
<br><br>
3° Disponibilização da água tratada

<br><br>

## 🛠 Instalação

<br><br>
Nesta etapa vamos demosntrar como fazer a programação no do código para o arduino e esp32 para que esta localizado na pasta src.

1° Baixar a IDLE do Arduino para fazer o código e realizar o upload para o arduino e esp32.
<br><br>
2° Indentificar qual o tipo de arduino e esp32 que você esta utilizando e baixe as bibliotecas caso necessário, nós utilizamos o Arduino UNO e o Esp32.
<br><br>
3° Separamos os componentes do nosso projeto entre o arduino e esp321 para não termos divergencias nos dados coletados pelo esp32.
<br><br>
4° Desenvolvemos o codigo para o arduino para o gerenciamento das bombas.
<br><br>
5° Desenvolvemos o codigo para o eps32 para o gerenciamento das bombas.
<br><br>

Abaixo na configurção para desenvolvimento está os componentes que utilizamos para a montagem do nosso projeto.


<br><br>
## 💻 Configuração para Desenvolvimento
<br><br>
<p align="center">
<img src="docs/PROJETO.jpeg" alt="NOME DO JOGO" border="0">
<br><br>

No nosso projeto utilizamos os seguintes elementos de comunicação para conseguirmos realizar as leituras de dados e fazer com que o projeto cumpra com o objetico que nos o desenvolvemos.
<br><br>
Os 4 sensores controlados e 1 filtro de agua controlados por IOT estão listados abaixo:
<br><br>
Sensor de Turbidez: Com este sensor podemos verificar a Turbidez da agua captada ou seja a transparencia da agua.
<br><br>
Sensor de Ph: Com este sensor podemos verificar o indice de Ph da água.
<br><br>
Sensor de Nivel: Uma boia para podermos verificar o nivel de água de cada estação.
<br><br>
Bomba de Agua: Utilizado para fazer com que a agua seja trasportada entre as estações.
<br><br>
Filtro de Agua: Para que o tratamento seja realizado.
<br><br>
Com o todos os os sensores devidamente ligados utilizamos o Arduino e Esp32 para podermos gerenciar os dados e controlar cada sensor para que o projeto realize o seu objetivo com sucesso. 
<br><br>

## 🗃 Histórico de lançamentos
<br><br>

A cada atualização os detalhes devem ser lançados aqui.

* 0.2.2 - 21/11/2023
    * Montamos a versão atual do projeto.
    * MUDANÇA: Fizmos a alteração do sensores de ph e turbidez para o esp32, para não termos interferencia nos dados coletados.
* 0.2.1 - 17/11/2023
    * MUDANÇA: Montamos uma base de mfd para colocarmos o projeto e alocarmos os cabos, fonte, arduino e esp32.
* 0.2.0 - 10/11/2022
    * MUDANÇA: Compramos um filtro de carvão para a estção de tratmento e o mdf para fazermos a base do projeto.
    * ADD:Colocamos um eps32 para fazemos que ele recebece-se o dados do arduino e nos mostra-se o valor do  ph e turbidez.
* 0.1.1 - 01/11/2023
    * CONSERTADO: Compramos reles, para que as bombas liguem e desliguem quando necessário conforme programamos no arduino.
* 0.1.0 - 27/10/2023
    * Realizamos o primeiro prototipo com todos os sensores e bombas
    * MUDANÇA: Precisamos encontrar uma forma de como parar as bombas que estão ativadas o tempo todo.
* 0.0.1 - 19/10/2023
    * Indentificamso os sensores e como iriamos montar o projeto.
<br><br>
## 📋 Licença/License

<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/2023-2-NADS1/Grupo6/tree/main">AquaCicle</a> by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://github.com/2023-2-NADS1/Grupo6/tree/main">Matheus Moura da Silva e Murilo Dias da Silva</a> is licensed under <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"></a></p> 

## 🎓 Referências

Aqui estão as referências usadas no projeto.

1. [<https://github.com/iuricode/readme-template>](https://www.youtube.com/watch?v=1gSO4jCAuIk)
2. [<https://github.com/gabrieldejesus/readme-model>](https://repositorio.uniceub.br/jspui/bitstream/235/5934/1/21063094.pdf)
