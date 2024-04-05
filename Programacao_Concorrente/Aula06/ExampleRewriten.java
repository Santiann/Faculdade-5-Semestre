import java.util.ArrayList;
import java.util.Iterator;

class Main {
    public static void main(String[] args) {
        ArrayList<String> animals = new ArrayList<>();

        // Add elements
        animals.add("Dog");
        animals.add("Cat");
        animals.add("Horse");
        System.out.println("ArrayList: " + animals);

        // Using get() to access the first element
        if (!animals.isEmpty()) {
            String element = animals.get(0);
            System.out.println("Accessed Element: " + element);
        }

        // Using iterator()
        Iterator<String> iterate = animals.iterator();
        System.out.print("ArrayList Elements: ");

        while (iterate.hasNext()) {
            System.out.print(iterate.next());
            if (iterate.hasNext()) {
                System.out.print(", ");
            }
        }
    }
}
 