 view: CubeAndReport {
    label: "CubeAndReport"
    sql_table_name: "BigQuery Project"."CubeAndReport";;
    dimension: Age_Hierarchy_Age_Level {
        label: "Age Level"
        type: number
        sql: ${TABLE}.`Age Level`;;
    }

    dimension: Increment_Hierarchy_Increment_Level {
        label: "Increment Level"
        type: number
        sql: ${TABLE}.`Increment Level`;;
    }

    dimension: Salary_Hierarchy_Salary_Level {
        label: "Salary Level"
        type: number
        sql: ${TABLE}.`Salary Level`;;
    }


    measure: m_Age_avg {
        label: "age"
        type: average
        sql: ${TABLE}.`m_Age_avg`;;
    }

    measure: m_Bonus_sum {
        label: "totalsalary"
        type: sum
        sql: ${TABLE}.`m_Bonus_sum`;;
    }

}
