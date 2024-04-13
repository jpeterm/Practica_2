/*
Jose Perez
Fundacion kinal
Centro Educativo Tecnico Laboral Kinal
Quinto Perito 
Quinto Electronica
Codigo Tecnico: EB5AV
Curso: TALLER ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS I
Proyecto: Como leer un pin digital 
Dev: Profe. Alejandro Lopez Navas
Fecha: 04 de abril
*/

//Directivas de preprocesador
#define LedAzul     4    //pin4 conectado a un led
#define tiempo_espera  500  //tiempo entre estados del led

void setup()
{
  
  pinMode(LedAzul, OUTPUT); //Pin4 como salida.
  digitalWrite(LedAzul, LOW); //LED conectado al pin13 inicia apagado
}

void loop()
{

  digitalWrite(LedAzul, HIGH); //Enciendo el led conectado al pin4 delay(tiempo_espera); //espera de 500 milisegundos. digitalWrite(LedAzul, LOW); //Apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedAzul, LOW); //apago el led conectado al pin4
  delay(tiempo_espera); // espera de 500 milisegundos
}