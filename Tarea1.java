import java.util.Scanner;

public class Tarea1 {
    public static void main(String[] args)
    {
        //Declaracion de variables
        Scanner sc = new Scanner(System.in);
        String write = "";

        //Asignar valores a variables
        System.out.println("Ingresar dimension de matriz M*M");
        write = sc.nextLine();

        // Casteo
        int valor = Integer.parseInt(write);

        if(valor > 0)
        {
            // crear la matriz
            int[][]matriz = new int[valor][valor];
            System.out.println("Las dimensiones de la matriz a crear son de: " + valor + "x" + valor);

            // recorrer la matriz
              for(int i=0; i< matriz.length; i++)
              {
                for(int j = 0; j < matriz[i].length; j++)
                {
                    matriz[0][j] = 1;
                    matriz[i][0] = 1;
                    matriz[i][valor - 1] = 1;
                    matriz[valor - 1][i] = 1;
                    if(matriz[i][j] == 1){
                        System.out.print(matriz[i][j] + " ");
                    }else{
                        System.out.print("  ");
                    }
                }
                System.out.println();
              }
        }
        else
        {
            System.out.println("No es posible realizar dicha matriz, debe ser mayor a 0");
        }

    }
}
