package me.twodee.CS2005.GradeCalculator;

import java.util.List;

public class Student {

    String name;
    List<Subject> subjects;

    public Student(String name, List<Subject> subjects)
    {
        this.name = name;
        this.subjects = subjects;
    }

    public String getName() {
        return name;
    }

    public void displayResults()
    {
        System.out.println("Results: ");
        for (Subject subject: subjects) {
            System.out.println("Subject: " + subject.getName() + "CAT marks: " + subject.getCatMarks()
                    + "Non CAT marks: " + subject.getNonCatMarks() + " Grade: " +  subject.getGrade());
        }
    }

}
