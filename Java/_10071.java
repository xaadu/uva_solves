/* UVA   -->  10071 */
import java.util.Scanner;
class _10071 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        long v, t;
        while(scan.hasNext()) {
            v = scan.nextLong();
            t = scan.nextLong();
            System.out.println(2 * v * t);
        }
    }
}
