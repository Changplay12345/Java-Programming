public class Ex1_4ch1 {
    public static void main(String[] args) {
        int year = 157680000;
        int population = 312032486;
        int birth = year/7;
        int death = year/13;
        int immigrant = year/45;
        int fiveyearpop = population+birth-death+immigrant;

        System.out.println("The population of the next five year is " + fiveyearpop);
    }
}
