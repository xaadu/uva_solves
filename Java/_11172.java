/* UVA --> 11172 */

import java.util.Scanner;

class _11172 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        long x,y,t;
        t = scan.nextLong();
        while(t--!=0){
            x = scan.nextLong();
            y = scan.nextLong();
            System.out.println((x>y)?'>':(x<y)?'<':'=');
        }
    }
}
