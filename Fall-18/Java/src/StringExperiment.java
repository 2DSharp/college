public class StringExperiment
{
    public String reverse(String string)
    {
        StringBuilder builder = new StringBuilder(string);
        return builder.reverse().toString();
    }

    public int getLength(String text)
    {
        return text.length();
    }

    public int calculateAge(int age, int year, int requestedYear)
    {
        return 0;
    }
}
