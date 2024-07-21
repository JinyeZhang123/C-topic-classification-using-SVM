[&](const Record& a, const Record& b) {
          return insert_orders[a.first] < insert_orders[b.first];
        }