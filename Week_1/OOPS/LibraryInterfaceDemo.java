public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        // test for kids users

        KidUsers kid1 = new KidUsers();

        kid1.age = 10;
        kid1.registerAccount();

        kid1.bookType = "Kids";
        kid1.requestBook();

        kid1.age = 18;
        kid1.registerAccount();

        kid1.bookType = "Fiction";
        kid1.requestBook();

        System.out.println();

        // test for adut user

        AdultUser adult1 = new AdultUser();

        adult1.age = 5;
        adult1.registerAccount();

        adult1.bookType = "Kids";
        adult1.requestBook();

        adult1.age = 23;
        adult1.registerAccount();

        adult1.bookType = "Fiction";
        adult1.requestBook();
    }
}