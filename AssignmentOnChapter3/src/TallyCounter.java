public class TallyCounter {
    private int count,undo;

    public TallyCounter() {
        count = 0;
        undo=0;
    }
    public void CountIncrease() {
        count = count + 1;
    }
    public void undo() {
        if(undo < count) {
            count = Math.max(count - 1, 0);
            undo++;
        }
    }
    public int GetCount() {
        return count;
    }
}