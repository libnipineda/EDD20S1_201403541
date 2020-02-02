package edd.tarea2_201403541;

import java.util.Scanner;
import java.util.InputMismatchException;

/**
 *
 * @author libni
 */
public class EDDTAREA2_201403541 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Moneda coin = new Moneda();
        Usuario user = new Usuario();

        Scanner sc = new Scanner(System.in);
        Scanner sn = new Scanner(System.in);
        
        // Variables a utilizar en el sistema
        boolean salir = false;
        int opcion;
        
        // Opcione para el menu
        while(!salir){
            // Opciones del menu
            System.out.println("++++++++++ Menu ++++++++++");
            System.out.println("0. Crear una moneda ");
            System.out.println("1. Crear Usuario");            
            System.out.println("2. Salir ");
            
            try{
                // Seleccionar opcion.
                System.out.println("Escribe una de las opciones.");
                opcion = sc.nextInt();
                System.out.println("++++++++ Fin Menu ++++++++");
                
                // Elegir las opciones del menu
                switch(opcion){
                    case 0:
                    System.out.println("---------- Datos de la moneda ----------");
                    // Ingresar datos para la clase Moneda.
                    System.out.println("Ingrese el nombre de la moneda");
                    coin.nombre = sn.nextLine();
                    
                    System.out.println("Ingrese la cantidad de modeas:");
                    coin.decimal = Float.parseFloat(sn.nextLine());
                    
                    System.out.println("Ingrese el simbolo de la moneda");
                    coin.simbolo = sn.nextLine();
                    
                    //Llenar datos del metodo moneda
                    coin.Moneda(coin.nombre, coin.decimal, coin.simbolo);
                    System.out.println("---------- Fin Datos de la moneda ----------");
                        break;
                        
                    case 1:
                        int a=0;
                       System.out.println("********** Datos de Usuario **********");
                       // Ingresar de datos para la clase Usuario
                       System.out.println("Ingrese el nombre del usuario");
                       user.nombreU = sn.nextLine();
                                              
                       user.Id = a++;                       
                       // Llenar datos para la clase Usuario
                       user.User(user.nombreU, user.Id);
                       System.out.println("********** Fin Datos de Usuario **********");
                        break;
                        
                    case 2:                                                                                                                                                  
                        salir = true;
                        break;
                        
                    default:
                        System.out.println("Solo numeros entre 0 y 2");
                        break;
                }
            }catch(InputMismatchException e){
                System.out.println("Debes insertar un numero.");
                sc.next();
            }
        }
    }
}