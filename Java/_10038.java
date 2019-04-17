/* UVA --> 10038 */
// Wrong
import java.util.Scanner;
        import java.lang.Math;

public class _10038 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        boolean check;
        int t;
        while(scan.hasNext()) {
            check = true;
            t = scan.nextInt();
            long x[] = new long[5000];
            for (int i = 0; i < t; i++) {
                x[i] = scan.nextLong();
            }
            long y = 0;
            for (int i = 0; i < t; i++) {
                if (i == 0 & i + 1 != t) y = Math.abs(x[i] - x[i + 1]);
                else if (i + 1 != t && (y != Math.abs(x[i] - x[i + 1])+1 && y != Math.abs(x[i] - x[i + 1]) && y != Math.abs(x[i] - x[i + 1])-1)) {
                    check = false;
                    break;
                }
                else y = Math.abs(x[i] - x[i + 1]);
            }
            if (check) System.out.println("Jolly");
            else System.out.println("Not jolly");
        }
    }
}
