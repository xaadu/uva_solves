/*  UVA --> 10055 */

import java.util.*;

class _10055 {
    public static void main(String args[]){
            long s1,s2;
            Scanner scan = new Scanner(System.in);
            while(scan.hasNext()){
                s1 = scan.nextLong();
                s2 = scan.nextLong();
                System.out.println((s1>s2)?s1-s2:s2-s1);
            }
    }
}
