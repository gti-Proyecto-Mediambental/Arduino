
// -*- mode: c++ -*-
// ----------------------------------------------------------
// Àngel Buigues Anrdes
// 2019-09-20
// ----------------------------------------------------------
#ifndef PUERTO_SERIE_H_INCLUIDO
#define PUERTO_SERIE_H_INCLUIDO
// ----------------------------------------------------------
class PuertoSerie  { //classe PuertoSerie
public:
  
  // .........................................................
  /**
 * La funcion PuertoSerie() es un constructor que recibe un parametro entero.
 * Z -> Constructor() ->
 * @param baudios parametro tiempo dado de valor entero.
 * @return nada.
 */
  PuertoSerie (long baudios) {
	Serial.begin( baudios );
	// mejor no poner esto aquí: while ( !Serial ) delay(10);   
  } // ()
  // .........................................................

  // .........................................................
  /**
 * La funcion esperarDisponible().
 * esperaDisponible()
 */
  void esperarDisponible() {

	while ( !Serial ) { //mientras espero
	  delay(10);   
	}

  } // ()
  // .........................................................
  
  // .........................................................
  /**
 * La funcion PuertoSerie() es un constructor que recibe un parametro entero.
 * Texto -> escribir()
 * @param T parametro de valor tipo Texto.
 * @return nada.
 */
  template<typename T>
  void escribir (T mensaje) { 
	Serial.print( mensaje ); //escribe el Texto
  } // ()
  // ----------------------------------------------------------
  
}; // class PuertoSerie

// ----------------------------------------------------------
#endif
