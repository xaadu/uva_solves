/* UVA --> 272 */

import java.util.Scanner;

public class _272 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int i;
        boolean f=true;
        String st1,st2="";
        while(scan.hasNext())
        {
            st1 = scan.nextLine();
            st2 = "";
            for(i=0; i < st1.length(); i++)
            {
                if(st1.charAt(i)==34)
                {
                    if(f==false)
                    {
                        st2+="'";
                        st2+="'";
                        f=true;
                        continue;
                    }
                    st2+="`";
                    st2+="`";
                    f=false;
                    continue;
                }
                st2 += st1.charAt(i);
            }
            System.out.println(st2);
        }
    }
}
