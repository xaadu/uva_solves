/* UVA --> 494 */

import java.util.Scanner;

class _494 {
    public static void main(String args[]) {
        Scanner scan  = new Scanner(System.in);
        String x;
        int i,c=0;
        while(scan.hasNext()){
            x = scan.nextLine();
            for(i=0; i<x.length(); i++){
                if((x.charAt(i)>64&&x.charAt(i)<91)||(x.charAt(i)>96&&x.charAt(i)<122)){
                    c++;
                    i++;
                    while(i<x.length()&&((x.charAt(i)>64&&x.charAt(i)<91)||(x.charAt(i)>96&&x.charAt(i)<122)))
                        i++;
                }
            }
            System.out.println(c);
            c=0;
        }
    }
}
