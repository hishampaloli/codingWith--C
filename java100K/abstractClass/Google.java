 abstract class Google {
    abstract void search();

    void message() {
        System.out.println("Thanks for using");
    }
}

class searchAll extends Google {
    void search() {
        System.out.println("All result");
    }
}

class searchImage extends Google {
    void search() {
        System.out.println("Image searhc");
    }
}

class searchVideo extends Google {
    void search() {
        System.out.println("Video search");
    }
}