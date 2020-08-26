#include "Preguntas.h"

Preguntas::Preguntas() {
	bancoPreguntas[0][0] = "Uno de los siguientes personajes fue \nel encargado de pintar la capilla Sixtina: \nA) Miguel Ángel. \nB) Donatello. \nC) Leonardo Da Vinci. \nD) Francis Bacon";
	bancoPreguntas[0][1] = "Genio del renacimiento que esculpio \nel Moises, el David y la Pieta: \nA) Miguel Angel Buonarroti. \nB) Leonardo Da Vinci. \nC) Rafael Sanzio. \nD) Galileo Galilei";
	bancoPreguntas[0][2] = "Durante el renacimiento el estilo \nartistico que impregno el arte, la filosofia, la pintura escritura fue el: \nA) El Gotico. \nB) El barroco. \nC) el clasicismo. \nD) Romanticismo";
	bancoPreguntas[0][3] = "Durante el renacimiento surge una \nnueva visión del hombre, que se vio reflejada en el arte, en la política y en las ciencias sociales y humanas, a lo que se denomina: \nA) Antropocentrismo. \nB) Humanismo. \nC) Paradigma antropologico. \nD) Teocentrismo.";
	bancoPreguntas[0][4] = "Cuatro genios del renacimiento (Leonardo, \nDonatello, Rafael y Michelangelo) han sido llevados a la pantalla en los comics de : \nA) Las tortugas ninjas. \nB) Los caballeros del Zodiaco. \nC) Los cuatro fantasticos. \nD) Los antagonistas de Attack Titan";

	bancoPreguntas[1][0] = "Durante el renacimiento, el modelo de gobierno es uno de los siguientes: \nA) Monarquia absoluta. \nB) Tirania republicana. \nC) Democracia participativa. \nD) Liberalismo político.";
	bancoPreguntas[1][1] = "De los siguientes acontecimientos, selecciones el que inicia el período moderno: \nA) Toma de Constantinopla. \nB) Tratado de paz de westfalia. \nC) Toma de la Bastilla. \nD) La ruta de la seda.";
	bancoPreguntas[1][2] = "Durante el siglo XV, la sociedad se estratifica en tres estamentos definidos: \nA) Clase media, baja y alta. \nB) nobleza, clero y estado llano. \nC) Artesanos, guardianes y gobernantes";
	bancoPreguntas[1][3] = "Aparece el realismo politico, que se basaba en un orden establecido, explicacion de un sistema y recomendaciones de como gobernar: \nA) Tomas Moro. \nB) Jean Bodin. \nC) Nicolas Maquiavelo. \nD) Erasmo de Rotterdam.";
	bancoPreguntas[1][4] = "Terminada la edad media, en el contexto de la politica resulta que: \nA) La Iglesia resalta su poder. \nB) La Iglesia pierde el papel rector en la politica. \nC) La Iglesia evangelica se posiciona en la politica.";

	bancoPreguntas[2][0] = "Entre los siguientes renacentistas seleccione, uno de los precursores filosofo-cientifico del heliocentrismo (teoría que afirma que el sol es el centro del universo): \nA) Tomas Moro. \nB) Galileo. \nC) Platon.";
	bancoPreguntas[2][1] = "El metodo cientifico se introduce por el interes de tres filosofos. Entre los siguientes uno de los mencionados no es precursor del metodo cientifico: \nA) Francis Bacon. \nB) Galileo Galilei. \nC)Nicolas Maquiavelo. \nD) Rene Descartes";
	bancoPreguntas[2][2] = "Es uno de los precursores del pensamiento Moderno: \nA) Isaac Newton. \nB) René Descartes. \nC) Erasmo de Roterdam";
	bancoPreguntas[2][3] = "De los siguientes filosofos niega el geocentrismo (teoria que afirma que el centro de nuestro sistema solar es la tierra): \nA) Aristoteles. \nB) Nicolas Copernico. \nC) Tomas de Aquino";
	bancoPreguntas[2][4] = "Uno de los inventos que suscito un conocimiento ilimitado, fue el de Gutenberg: \nA) El astrolabio. \nB) La imprenta. \nC) La Nao y la Carabela. \nD) El Telescopio";

	bancoPreguntas[3][0] = "Despues del feudalismo medieval acudimos al surgimiento de una nueva clase social conocida como la: \nA) La monarquia. \nB) El mercantilismo. \nC) La burguesia. \nD) El proletariado";
	bancoPreguntas[3][1] = "El renacimiento supone una epoca de absolutismo y nacionalismos, como el nacimiento de fuertes monarquias europeas centralizadas como: \nA) Grecia. \nB) Inglaterra. \nC) Yugoslavia. \nD) Egipto";
	bancoPreguntas[3][2] = "Antes de la consolidación del estado moderno, Italia estuvo divida en pequeñas ciudades-estado normalmente enfrentadas entre si, como es el caso de: \nA) Florencia-Napoli. \nB) Ámsterdam-Cracovia. \nC) Reims-Colonia. \nD) Milan-Lourdes.";
	bancoPreguntas[3][3] = "La toma de Constantinopla supone un bloqueo comercial entre Europa y Asia (la ruta de la seda) y ocurrio en lo que hoy es actualmente: \nA) Eslovaquia. \nB) Estambul en Turquia. \nC) Mesopotamia";
	bancoPreguntas[3][4] = "Resurge el interes por Grecia y Roma, junto al declive del sistema feudal, el crecimiento del comercio e innovaciones entre las que mencionamos: \nA) La imprenta y la brujula. \nB) La rueda y la escritura \nC) Las maquinas de vapor y la produccion en masa,";

	respuesta[0][0] = 0;
	respuesta[0][1] = 0;
	respuesta[0][2] = 1;
	respuesta[0][3] = 1;
	respuesta[0][4] = 0;

	respuesta[1][0] = 0;
	respuesta[1][1] = 1;
	respuesta[1][2] = 1;
	respuesta[1][3] = 2;
	respuesta[1][4] = 1;

	respuesta[2][0] = 1;
	respuesta[2][1] = 2;
	respuesta[2][2] = 1;
	respuesta[2][3] = 1;
	respuesta[2][4] = 1;

	respuesta[3][0] = 2;
	respuesta[3][1] = 1;
	respuesta[3][2] = 0;
	respuesta[3][3] = 1;
	respuesta[3][4] = 0;

}

string Preguntas::escogerPregunta(int cat, int pos) {
	return bancoPreguntas[cat][pos];
}

int Preguntas::escogerRespuesta(int cat, int pos) {
	return respuesta[cat][pos];
}