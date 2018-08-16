package me.twodee.ArrayStuff;

import me.twodee.CommandLineApp;

import java.util.Scanner;

public class MidValueReplace implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        System.out.println("Enter the number of elements to be entered: ");
        int length = scanner.nextInt();

        int[] arr = new int[length];
        for (int i = 0; i < length; i++)
        {
            System.out.print("Enter the " + (i + 1) + " element: ");
            arr[i] = scanner.nextInt();
        }

        System.out.println("Mid value: " + getMidValue(arr));
    }

    private double getMidValue(int[] arr)
    {
        return Math.ceil(arr.length / 2);
    }
}
