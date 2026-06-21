package Week_3.OOPS;

import java.util.Random;

abstract class TestCompartmet {
    public abstract String notice();
}

class Ladies extends TestCompartmet {
    public String notice() {
        return "This is ladies only compartment.";
    }
}

class FirstClass extends TestCompartmet {
    public String notice() {
        return "This is first class compartment. Make sure you hold premium ticket.";
    }
}

class Luggage extends TestCompartmet {
    public String notice() {
        return "This is lugage compartment. Only authorized parcel and cargo.";
    }
}

class General extends TestCompartmet {
    public String notice() {
        return "General compartment - open seating for all. ";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        TestCompartmet[] compartments = new TestCompartmet[10];
        Random random = new Random();

        System.out.println("GENERATING TRAIN COMPARTMENTS !!");

        for (int i = 0; i < compartments.length; i++) {

            int randomNum = random.nextInt(4) + 1;
            switch (randomNum) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }

            System.out.println("Compartment [" + (i + 1) + "] (Type Code: " + randomNum + ")");
            System.out.println(compartments[i].notice());
            System.out.println();

        }

    }
}
