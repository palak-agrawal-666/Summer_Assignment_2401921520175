package OOPs.live;

import OOPs.music.string.*;
import OOPs.music.wind.*;
import OOPs.music.Playable;

public class Test {
    public static void main(String[] args) {
        Veena v = new Veena();
        v.play();

        Saxophone s = new Saxophone();
        s.play();

        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}
