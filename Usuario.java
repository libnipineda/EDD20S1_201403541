package edd.tarea2_201403541;

/**
 *
 * @author libni
 */
public class Usuario {
  //Declaracion de variables
  public String nombreU;
  public int Id;

 public void User(String _User, int _Id){
     this.nombreU = _User;
     this.Id = _Id;
 }

public String Mostar(){
String dato;
dato = "id: " + Id  + "El nombre del usuario es: " + nombreU;
System.out.println(dato);
return dato;    
} 

}
