// QUES--> WRITE A PROGRAM TO TAKE THE RADIUS INPUT OF SPHERE AND FIND ITS AREA
import java.util.*;
class Area
{
    float sphereRadi;
    Area()
    {
        sphereRadi = 0;
    }
    public void Input()
    {
        Scanner scan = new Scanner(System.in);
        sphereRadi = scan.nextFloat();
        
        scan.close();
    }
    public  void sphere() 
    {
        double arS = 4*22/7*sphereRadi*sphereRadi;
        System.out.println("AREA OF THE SPHERE: " + arS);
    }

    public static void main(String args[])
    {
        System.out.println("ENTER THE RADIUS OF THE SPHERE: ");
        Area ar = new Area();
        ar.Input();
        ar.sphere();
    }
}

/*
SAMPLE INPUT - 5
SAMPLE OUTPUT - 300
*/
