package me.twodee.VehicleInformation;

class Vehicle
{
    private String type;
    private int weight;

    public Vehicle(String type, int weight)
    {
        this.type = type;
        this.weight = weight;
    }

    public String getType()
    {
        return type;
    }

    public int getWeight()
    {
        return weight;
    }
}
