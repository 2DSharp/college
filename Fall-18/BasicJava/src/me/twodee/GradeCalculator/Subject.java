package me.twodee.GradeCalculator;

public class Subject {

    String name;
    double catMarks;
    double nonCatMarks;

    public Subject(String name)
    {
        this.name = name;
    }

    public Subject(String name, double catMarks, double nonCatMarks)
    {
        this.name = name;
        setCatMarks(catMarks);
        setNonCatMarks(nonCatMarks);
    }

    public void setCatMarks(double marks)
    {
        this.catMarks = marks;
    }

    public void setNonCatMarks(double marks)
    {
        this.nonCatMarks = marks;
    }

    public String getName()
    {
        return name;
    }

    public double getCatMarks()
    {
        return catMarks;
    }

    public double getNonCatMarks()
    {
        return nonCatMarks;
    }

    public String getGrade()
    {
        double total = nonCatMarks + catMarks;
        switch ((int) total / 10) {
            case 1:
            case 2:
            case 3: return "F";
            case 4: return "E";
            case 5: return "D";
            case 6: return "C";
            case 7: return "B";
            case 8: return "A";
            case 9:
            case 10: return "S";

            default: return "F";
        }
    }
}
