void part6() {
    std::cout << "--- Part 6 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);
    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    std::cout << list->toString() << std::endl;
    try {
        list->remove(11);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(11) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(11) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(0);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(0) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(0) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(10);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(10) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(10) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(6);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(6) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(6) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(8);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(8) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(8) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(2);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(2) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(2) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(4);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(4) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(4) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(3);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(3) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(3) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(6);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(6) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(6) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(4);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(4) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(4) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(1);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(1) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(2);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(2) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(2) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(1);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(1) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(0);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(0) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(0) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);
    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;

    delete list;
}

