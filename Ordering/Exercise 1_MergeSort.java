package mergesort;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException; //import libraries
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

/**
 * @author Harold Pedraza
 * @version 30/11/2017
 */

public class Merge_Sort {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); //buffereds to write and read
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        bw.write("Exercise of Arrays\n");
        bw.write(" ");
        String cadena;
        bw.write("\n");
        bw.write("Enter the numbers to fill the array separated by commas\n");
        bw.flush();
        cadena = br.readLine();//read the numbers 
        String matriz2[] = cadena.split(","); //I leave by commas and saved them in a string array
        int matriz[] = new int[matriz2.length]; //int array of sizes length string
        int contador = 0;// will serve to determine the position of the string array

        for (int i = 0; i < matriz.length; i++) {
            matriz[i] = Integer.parseInt(matriz2[contador++]);//convert the string to int 
        }

        bw.write("\n");
        bw.write("The comma separated array is :\n");
        for (int i = 0; i < matriz2.length; i++) {
            bw.write(matriz[i] + " ");
            bw.flush();
        }

        bw.write(" \n");
        bw.flush();
        Merge_Sort open = new Merge_Sort();
        open.mergeSort(matriz); //passed the parameter        
   }

    public int[] mergeSort(int[] array) throws IOException {
        
        if (array.length == 1){ //Array is already ordered, because you can not split in half
            return array;           
        }else { //divided into two parts
           
            int n = array.length / 2;
            int left[] = new int[n]; //I keep the numbers split in the two arrangements
            int right[];
            
            if(array.length %2 == 0) //determined the module if it is even or odd
                right = new int[n];
            else
                right = new int[n+1]; //to know if right will be par or not
            
            for (int i = 0; i < n; i++) {
                left [i]= array[i];
            }
            
            int x =0;
            for (int i = n; i < array.length; i++) {
                if (x < right.length) {
                    right [x]= array[i];
                    x++;
                }
            }
            
            left = mergeSort(left);
            right = mergeSort(right);
            return merge(left,right); //I pass the parameters to the next process
        }
    }
    
    public int [] merge(int array[],int array2[]) throws IOException{ //orderly combination, subset of ordered numbers
        int L = array.length + array2.length;
        int array3[] = new int [L]; //created the third array with the length of the sums of the subsets
        int indexA =0,indexB=0, indexC=0;
        
        while( indexA < array.length && indexB < array2.length){ //while the two arrangements have elements
            
            if(array[indexA] < array2[indexB]){ //if it is minor, add elements to the matrix array 3
                array3[indexC] = array[indexA];
                indexA += 1; //increased the rates
                indexC += 1;
            }else{ //add elements to array 2
                 array3[indexC] = array2[indexB];
                 indexB +=1;
                 indexC += 1;//increased
            }    
        }
        
        while(indexA < array.length){ //while the array has elements
            array3[indexC] = array[indexA];
            indexA += 1;
            indexC += 1;
        }
        
        while(indexB < array2.length){ //while the array2 has elements
            array3[indexC] = array2[indexB];
            indexB += 1;
            indexC += 1;
        }

        return mostrar(array3);
    }

    public int[] mostrar (int array[]) throws IOException{
        bw.write("\n");
        bw.write("\nTotal order: \n");
        bw.flush(); 

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+" ");
        }
        return array;
    }
}
