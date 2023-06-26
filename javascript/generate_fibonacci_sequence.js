/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let fb = [];
    fb[0] = 0;
    yield fb[0];
    fb[1] = 1;
    yield fb[1];

    for(let i=2; i<50; i++){
        fb[i] = fb[i-1] + fb[i-2];
        yield fb[i];
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */