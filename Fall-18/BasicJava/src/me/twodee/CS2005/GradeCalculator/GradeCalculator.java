package me.twodee.CS2005.GradeCalculator;

import me.twodee.CS2005.CommandLineApp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class GradeCalculator implements CommandLineApp
{
    public double getMarks(Scanner scanner, String prompt, double max)
    {
        System.out.print(prompt);
        double marks;

        while (!verifyMarks(marks = scanner.nextDouble(), max)) {
            System.out.println("Error, marks can't be less than 0 or greater than " + max);
            System.out.print(prompt);
        }
        return marks;
    }

    public boolean verifyMarks(double given, double max)
    {
        return (given <= max && given >= 0);
    }

    public void run(Scanner scanner)
    {
        List<Subject> subjects= new ArrayList<>();

        System.out.print("Enter the name of the student: ");
        String name = scanner.nextLine();

        System.out.print("Enter the number of subjects: ");
        int num = scanner.nextInt();

        for(int i = 0; i < num; i++) {
            System.out.print("Enter the subject " + (i + 1) + " name: ");
            String subject = scanner.nextLine();
            scanner.nextLine();
            double cat = getMarks(scanner, "Cat marks: ", 60);
            double nonCat = getMarks(scanner, "Non-cat marks: ", 40);

            subjects.add(new Subject(subject, cat, nonCat));
        }

        Student student = new Student(name, subjects);
        System.out.println("Results for "+ student.getName());
        student.displayResults();
    }
}
