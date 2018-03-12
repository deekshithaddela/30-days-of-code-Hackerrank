import java.io.*;
import java.util.*;


public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
       int n =scan.nextInt();

       scan.nextLine();

        for (int i = 0; i < n; i++) {
            String string =scan.nextLine();
            char[] a = string.toCharArray();

            for (int j = 0; j < a.length; j++) {
                if (j % 2 == 0) {
                    System.out.print(a[j]);
                }
            }

            System.out.print(" ");

            for (int j = 0; j < a.length; j++) {
                if (j % 2 != 0) {
                    System.out.print(a[j]);
                }
            }

            System.out.println();
        }

    }
}