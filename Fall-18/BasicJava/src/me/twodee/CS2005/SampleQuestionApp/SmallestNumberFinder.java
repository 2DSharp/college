package me.twodee.CS2005.SampleQuestionApp;

import me.twodee.CS2005.CommandLineApp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class SmallestNumberFinder implements CommandLineApp
{

    private double doSomething(double something) {
        return something + 2;
    }
    private double getSmallest(List<Double> nums)
    {
        String some = new String("Hi");
        return nums.stream().map(this::doSomething).min(Double::compareTo).get();
    }
    @Override
    public void run(Scanner scanner)
    {
        List<Double> nums = new ArrayList<>();

        int i = 0;
        while (i <= 2) {
            System.out.println("Enter the " + (i + 1) + " side: ");
            nums.add(scanner.nextDouble());
            i++;
        }

        System.out.println(getSmallest(nums));
    }
}
