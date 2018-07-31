import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Enter your age: ");
        int age = scanner.nextInt();
        System.out.println("At what year?: ");
        int year = scanner.nextInt();

        StringExperiment stringExperiment = new StringExperiment();
        System.out.println(name + "'s age is " +
                                   stringExperiment.calculateAge(age, year, 2018) + " on 2018");
    }


}
