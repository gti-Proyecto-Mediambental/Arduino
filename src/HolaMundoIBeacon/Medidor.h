// -*- mode: c++ -*-
#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO
// ----------------------------------------------------------
// Àngel Buigues Anrdes
// 2019-09-20
// ----------------------------------------------------------

// ------------------------------------------------------
class Medidor { //classe Medidor
private:
public:

  /**
 * La funcion Medidor() es un contructor vacio.
 * Medidor()
 */
  Medidor(  ) {
  } // ()
  // .....................................................

  /**
 * La funcion iniciarMedidor() para las cosas que no se puedan hacer en el constructor, if any.
 * iniciarMedidor()
 */
  void iniciarMedidor() {
  } // ()
  // .....................................................

  /**
 * La funcion medirCO2() devuelve el valor de C02.
 * medirCO2() -> Z
 */
  int medirCO2() {
	return 235;
  } // ()
  // .....................................................

  /**
 * La funcion medirTemperatura() devuelve el valor de Tempertura.
 * medirTemperatura() -> Z
 */
  int medirTemperatura() {
	return -12; // qué frío !
  } // ()
	// ------------------------------------------------------

}; // class

// ------------------------------------------------------
#endif
