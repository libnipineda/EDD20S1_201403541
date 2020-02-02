package edd.tarea2_201403541;

/**
 * @author libni
 */
public class Moneda {
    //Declaracion de variables
    public String nombre;
    public float decimal;
    public String simbolo;
    
    public void Moneda(String _Name, float _Decimal, String _Symbol){
        this.nombre = _Name;
        this.decimal = _Decimal;
        this.simbolo = _Symbol;
    }
    
    public String Mostrar(){
        String valor;
        valor = "La moneda lleva como nombre: " + nombre + " Hay en existencia un total de: "
                + decimal + " El simbolo de la moneda es: " + simbolo;
        return valor;
    }
        
    public String transfer(String _User1, String _Precio){
        
        return null;
    }
    
    public String transferFrom(String _User1, String _User2, String _Precio){
        
        return null;
    }
    
    public String balanceof(String User, String _Saldo, boolean accion){
        
        return null;
    }        
        
    public String approve(boolean dato){
        
        return null;
    }        
    
}