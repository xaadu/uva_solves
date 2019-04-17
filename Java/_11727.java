/* UVA --> 11727 */
import java.util.Scanner;
class _11727 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        long t,x,y,z,i;
        t = scan.nextLong();
        for(i=1; i<=t; i++){
            x = scan.nextLong();
            y = scan.nextLong();
            z = scan.nextLong();
            System.out.print("Case " + i + ": ");
            if(((x>y)&&(x<z))||((x>z)&&(x<y))) System.out.println(x);
            else if((y>x&&y<z)||(y>z&&y<x)) System.out.println(y);
            else System.out.println(z);
        }
    }
}
