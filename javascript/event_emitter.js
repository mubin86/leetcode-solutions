class EventEmitter {
    constructor(){
        this.evt={};
    }

  subscribe(event, cb) {
      if(this.evt[event]){
          this.evt[event].push(cb);
      }else{
          this.evt[event] = [cb];
      }


    return {
        unsubscribe: () => {
            if(!this.evt[event]){
                return;
            }
            this.evt[event] = this.evt[event].filter(fn=> fn!= cb);
        }
    };
  }

  emit(event, args = []) {
      let ans = [];

      if(!this.evt[event]){
          return ans;
      }

      for(let evnt of this.evt[event]){
          ans.push(evnt(...args));
      }

      return ans;
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */