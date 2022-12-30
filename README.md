# Requirements Traceability Game of Life Example

This is an example of requirements traceability in Doxygen. To demo, I made

* [List of Requirements](Requirements.html)
* [List of Functions that Satisfy the Requirements](satisfy.html)

## Requirements Traceability in Doxygen

To get started with Doxygen, follow [this tutorial](https://doxygen.nl/manual/starting.html). Create requirements as a collection of anchors in a doxygen file. Also, I created reference aliases to simplify how I can reference the requires in code. Inside the function documentation, I add
```
/**
 * My Function
 * 
 * it does a thing.
 * 
 * @satisfy{@req{REQID}} takes no less than 500 ms.
 * 
 * @param my_arg this is my arg
 */
void my_func(my_type &my_arg) {
    ...
}
```
