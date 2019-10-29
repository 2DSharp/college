package me.twodee.CS2005.CGPACalculator;

import me.twodee.CS2005.CommandLineApp;

import java.util.*;

public class CGPACalculator extends Calculator implements CommandLineApp
{
    Map<String, Integer> credits = new HashMap<>();
    Map<Integer, String> grades = new HashMap<>();
    Map<String, Integer> marks = new HashMap<>();

    public CGPACalculator()
    {
        credits.put("S1", 4);
        credits.put("S2", 3);
        credits.put("S3", 3);
        credits.put("S4", 3);
        credits.put("S5", 3);

        grades.put(10, "S");
        grades.put(9, "A");
        grades.put(8, "B");
        grades.put(7, "C");
        grades.put(6, "D");
        grades.put(5, "E");
        grades.put(4, "F");
    }

    @Override
    protected double calculate(Map<String, Integer> marks)
    {
        double cgpa = 0;
        for (Map.Entry<String, Integer> entry: marks.entrySet()) {
            cgpa += entry.getValue() * credits.get(entry.getKey());
        }
        System.out.println(marks.size());
        return cgpa / marks.size();
    }

    @Override
    public void run(Scanner scanner)
    {

        for (Map.Entry<String, Integer> entry: credits.entrySet()) {
            System.out.print("Enter the weightage in " + entry.getKey() + ": ");
            Integer weightage = scanner.nextInt();
            System.out.println("Credits: " + entry.getValue());
            System.out.println("Grade: " + grades.get(weightage));
            marks.put(entry.getKey(), weightage);
        }

        System.out.println("CGPA is: " + calculate(marks));
    }
}
